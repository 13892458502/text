package com.write.tomcat;

import com.write.standard.Servlet;
import com.write.standard.ServletException;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Context {
    private  final ConfigReader reader;
    private final String name;
    private Config config;
    //每个 Context 都有自己的类加载器
    //我们平时写的 web 应用中的代码，都是由自己 Context 的类加载器进行加载，互不干扰
    private final ClassLoader webappClassLoader = Context.class.getClassLoader();

    public Context(ConfigReader reader,String name) {
        this.reader = reader;
        this.name = name;
    }

    public Object getName() {
        return name;
    }

    public void readConfigFile(){
        this.config = reader.read(name);
    }

    List<Class<?>> servletClassList = new ArrayList<>();
    public void loadServletClasses() throws ClassNotFoundException {
        Set<String> servletClassNames = new HashSet<>(config.servletNameToClassNameMap.values());
        for(String servletClassName : servletClassNames){
            Class<?> servletClass = webappClassLoader.loadClass(servletClassName);
            servletClassList.add(servletClass);
        }
    }

    List<Servlet> servletList = new ArrayList<>();
    public void instantiateServletObjects() throws IllegalAccessException, InstantiationException {
        for(Class<?> servletClass : servletClassList){
            Servlet servlet = (Servlet)servletClass.newInstance();// 调用该类的无参构造方法，进行实例化对象
            servletList.add(servlet);
        }
    }

    public void initServletObjects() throws ServletException {
        for(Servlet servlet : servletList){
            servlet.init();
        }
    }
}
