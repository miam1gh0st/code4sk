<template>
    <header id="page_header">
      <h1>💻读书笔记</h1>
      <nav>
        <ul>
          <RouterLink to="/MainPage" class="top">HomePage</RouterLink>
          <RouterLink to="/AboutMe" class="top">About me</RouterLink>
          <RouterLink to="/TechSupport" class="top">TechSupport</RouterLink>
        </ul>
      </nav>
    </header>
    <div>
    <iframe src="https://ctext.org/mengzi/gaozi-ii/zh?searchu=%E6%95%85%E5%A4%A9%E5%B0%87%E9%99%8D%E5%A4%A7%E4%BB%BB%E6%96%BC%E6%98%AF%E4%BA%BA%E4%B9%9F%EF%BC%8C%E5%BF%85%E5%85%88%E8%8B%A6%E5%85%B6%E5%BF%83%E5%BF%97%EF%BC%8C%E5%8B%9E%E5%85%B6%E7%AD%8B%E9%AA%A8%EF%BC%8C%E9%A4%93%E5%85%B6%E9%AB%94%E8%86%9A%EF%BC%8C%E7%A9%BA%E4%B9%8F%E5%85%B6%E8%BA%AB%EF%BC%8C%E8%A1%8C%E6%8B%82%E4%BA%82%E5%85%B6%E6%89%80%E7%82%BA%EF%BC%8C%E6%89%80%E4%BB%A5%E5%8B%95%E5%BF%83%E5%BF%8D%E6%80%A7%EF%BC%8C%E6%9B%BE%E7%9B%8A%E5%85%B6%E6%89%80%E4%B8%8D%E8%83%BD%E3%80%82" />
    </div>
    
  </template>
   
   
  
  <script>
  export default {
    name: "FirstPage"
  }
  
  </script>
    
    
    
    
  <style scoped>
  #page_header>nav>ul,
  #page_footer>nav>ul {
    list-style: none;
    margin: 0;
    padding: 0;
  }
  
  .top {
    margin: 10px;
  }
  
  #page_header>nav>ul>li,
  #page_footer>nav>ul>li {
    margin: 0 20px 0 0;
    padding: 0;
    display: inline;
  }
  
  

  </style>