package com.write.webapps.dictionary;

import com.write.standard.ServletException;
import com.write.standard.http.HttpServlet;
import com.write.standard.http.HttpServletRequest;
import com.write.standard.http.HttpServletResponse;
import com.write.standard.http.HttpSession;

import java.io.IOException;

public class ProfileActionServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        HttpSession session = req.getSession();
        User user = (User) session.getAttribute("user");
        if(user == null){
            resp.sendRedirect("login.html");
        }else{
            resp.setContentType("text/plain");
            resp.getWriter().println(user.toString());
        }
    }
}
