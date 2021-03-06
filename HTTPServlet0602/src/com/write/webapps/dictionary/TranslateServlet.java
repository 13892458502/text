package com.write.webapps.dictionary;

import com.write.standard.ServletException;
import com.write.standard.http.HttpServlet;
import com.write.standard.http.HttpServletRequest;
import com.write.standard.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;

public class TranslateServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String english = req.getParameter("english");

        String chinese = translate("english");

        resp.setContentType("text/html");
        PrintWriter writer = resp.getWriter();
        writer.printf("<h1>翻译服务</h1>");
        writer.printf("<p>%s的意思是 %s<p>",english,chinese);
    }

    private String translate(String english){
        String chinese = english;
        if(chinese.equals("english")){
            chinese ="英语";
        }
        return  chinese;
    }
}
