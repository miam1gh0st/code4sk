<template> 
  <div class="WelcomePage" :style = "WelcomePage">
    <header id="page_header">
    <h1>Login</h1>
    <nav>
      <ul>
        <RouterLink to="/MainPage" class="top">HomePage</RouterLink>
        <RouterLink to="/AboutMe" class="top">About me</RouterLink>
        <RouterLink to="/TechSupport" class="top">TechSupport</RouterLink>
      </ul>
    </nav>
  </header>
    <section id="mainpage">
        <form method="post" action="">
            <h1>请输入账号密码</h1>
            <label for="user_name">账号：</label>
            <input type="text" name="user_name" size="20"/><br/>
            <br>
            <label for="password">密码：</label>
            <input type="text" name="password" size="20"/><br/>
            <p>
                <input style="margin-left:10px;" type="reset" value="取消" name="back"/>
                <input style="margin-left:20px;" type="submit" value="登录" name="back"/>
            </p>
        </form>
    </section>
        
    </div>
    
</template>
<script>
    export default{
        name:"LoginSheet",
        data(){
            return{
            msg: '',
            WelcomePage: {
                    backgroundImage:"url(" + require("../assets/KirbyFriends.jpg") + ")"
        }
        }
        
    }
    
    }
</script>
<style scoped>
.WelcomePage{
    width:100%;
    height:100%;  /**宽高100%是为了图片铺满屏幕 **/
    z-index:-1;
    position: absolute;
  }
    #mainpage{
        margin-top: 150px;
        text-align: center;
        font: 14px "黑体";
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
</style>