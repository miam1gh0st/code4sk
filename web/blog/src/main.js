import { createApp } from 'vue'
import { createRouter, createWebHistory } from 'vue-router'

import {createPinia} from "pinia"
import piniaPersist from "pinia-plugin-persist"
const app = createApp(App)
const pinia = createPinia()
pinia.use(piniaPersist)
app.use(pinia)




import App from './App.vue'
import AboutMe from './components/AboutMe.vue'
import MainPage from './components/MainPage.vue'
import TechSupport from './components/TechSupport.vue'
import LoginSheet from './components/LoginSheet.vue'
import LifeStyle from './components/LifeStyle.vue'
import TeamMember from './components/TeamMember.vue'
import WelcomePage from './components/WelcomePage.vue'
import RadioPage from './components/RadioPage.vue'




import FirstPage from './components/postpage/FirstPage.vue'
import SecondPage from './components/postpage/SecondPage.vue'
import ThirdPage from './components/postpage/ThirdPage.vue'






const routes = [
    { path: '/MainPage', component: MainPage },
    { path: '/AboutMe', component: AboutMe },
    { path: '/TechSupport', component: TechSupport },
    { path: '/LoginSheet', component: LoginSheet },
    { path: '/LifeStyle', component: LifeStyle },
    { path: '/TeamMember', component: TeamMember },
    { path: '/', component: WelcomePage },
    { path: '/RadioPage', component: RadioPage },
  


    { path: '/postpage/FirstPage', component: FirstPage },
    { path: '/postpage/SecondPage', component: SecondPage },
    { path: '/postpage/ThirdPage', component: ThirdPage },
]

const router = createRouter({
    history: createWebHistory(),
    routes, 
})


createApp(App).use(router).mount('#app')

