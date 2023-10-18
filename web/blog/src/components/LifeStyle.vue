<template>
    <header id="page_header">
    <h1>LifeStyle</h1>
    <nav>
      <ul>
        <RouterLink to="/MainPage" class="top">HomePage</RouterLink>
        <RouterLink to="/AboutMe" class="top">About me</RouterLink>
        <RouterLink to="/TechSupport" class="top">TechSupport</RouterLink>
        
      </ul>
    </nav>
  </header>
</template>

<style scoped>
p {
  margin: 0 0 20px 0;
}

p,
li {
  line-height: 20px;
}

#page_header {
  width: 100%;
}

#page_header>nav>ul,
#page_footer>nav>ul {
  list-style: none;
  margin: 0;
  padding: 0;
}

.top{
  margin: 10px;
}

#page_header>nav>ul>li,
#page_footer>nav>ul>li {
  margin: 0 20px 0 0;
  padding: 0;
  display: inline;
}

#posts {
  float: left;
  width: 74%;
}

#posts aside {
  float: right;
  font-size: 20px;
  line-height: 40px;
  margin-left: 5%;
  width: 35%;
}

#sidebar {
  float: left;
  width: 25%;
}

#page_footer {
  clear: both;
  display: block;
  text-align: center;
  width: 100%;
}
</style>