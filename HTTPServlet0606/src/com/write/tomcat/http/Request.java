package com.write.tomcat.http;

import com.write.standard.http.Cookie;
import com.write.standard.http.HttpServletRequest;
import com.write.standard.http.HttpSession;

import java.io.IOException;
import java.util.List;
import java.util.Map;

public class Request implements HttpServletRequest {
    private final String method;
    private final String requestURI;
    private final String contextPath;
    private final String servletPath;
    private final Map<String,String> parameters;
    private final Map<String,String> headers;
    private final List<Cookie> cookieList ;
    private HttpSessionImpl session = null;

    @Override
    public String toString() {
        return "Request{" +
                "method='" + method + '\n' +
                "requestURI='" + requestURI + '\n' +
                "contextPath='" + contextPath + '\n' +
                "servletPath='" + servletPath + '\n' +
                "parameters=" + parameters +'\n'+
                "headers=" + headers +'\n'+
                "cookieList=" + cookieList +'\n'+
                "session=" + session +
                '}';
    }

    public Request(String method, String requestURI, String contextPath, String servletPath, Map<String, String> parameters, Map<String, String> headers, List<Cookie> cookieList) throws IOException, ClassNotFoundException {
        this.method = method;
        this.requestURI = requestURI;
        this.contextPath = contextPath;
        this.servletPath = servletPath;
        this.parameters = parameters;
        this.headers = headers;
        this.cookieList = cookieList;
        for(Cookie cookie : cookieList){
            if(cookie.getName().equals("session-id")){
                String sessionId = cookie.getValue();
                this.session = new HttpSessionImpl(sessionId);
                break;
            }
        }
    }

    public String getContextPath() {
        return contextPath;
    }

    public String getServletPath() {
        return servletPath;
    }

    public Map<String, String> getParameters() {
        return parameters;
    }

    public Map<String, String> getHeaders() {
        return headers;
    }

    public List<Cookie> getCookieList() {
        return cookieList;
    }


    @Override
    public Cookie[] getCookies() {
        return cookieList.toArray(new Cookie[0]);
    }

    @Override
    public String getHeader(String name) {
        return headers.getOrDefault(name,"");
    }

    @Override
    public String getMethod() {
        return method;
    }

    @Override
    public String getRequestURI() {
        return requestURI;
    }

    @Override
    public String contextPath() {
        return contextPath;
    }

    @Override
    public String servletPath() {
        return servletPath;
    }

    @Override
    public HttpSession getSession() {
        if(session != null){
            return session;
        }
        return new HttpSessionImpl();
    }

    @Override
    public String getParameter(String name) {
        return parameters.getOrDefault(name,"");
    }
}
