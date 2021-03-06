package org.example.servlet;

import org.example.dao.loginDAO;
import org.example.exception.AppException;
import org.example.model.User;

import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet("/login")
public class LoginServlet extends AbstractBaseServlet{

    @Override
    protected Object process(HttpServletRequest req, HttpServletResponse resp) throws Exception {
        String username = req.getParameter("username");
        String password = req.getParameter("password");

        User user = loginDAO.query(username);
        if(user == null){
            throw new AppException("LOG002","用户名不存在");
        }
        if(!user.getPassword().equals(password)){
            throw new AppException("LOG003","用户名或密码错误");
        }
        HttpSession session = req.getSession();
        session.setAttribute("user",user);
        return null;

//        if(){
//            return null;
//        }else{
//            throw new AppException("LOG001","用户名密码错误");
//        }
    }
}