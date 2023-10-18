import { defineStore } from "pinia";

export const useMusicStore = defineStore("music", {
    state: () => {
        return {
            musicList: [
                {
                    id: 1,
                    title: "棉花糖骆驼",
                    singer: "椅子乐团",
                    uploader: "M1ng",
                },
                {
                    id: 2,
                    title: "雨一直下",
                    singer: "张宇",
                    uploader: "M1ng",
                },
                { 
                    id: 3, 
                    title: "痴心绝对",
                    singer: "李圣杰", 
                    uploader: "M1ng" },
                {
                    id: 4,
                    title: "手放开",
                    singer: "李圣杰",
                    uploader: "M1ng",
                },
                {
                    id: 5,
                    title: "你那么爱他",
                    singer: "李圣杰",
                    uploader: "M1ng",
                },
                {
                    id: 6,
                    title: "Blinding Lights",
                    singer: "The Weekend",
                    uploader: "Solsist",
                },
                {
                    id: 7,
                    title: "Blinding Lights",
                    singer: "The Weekend",
                    uploader: "Solsist",
                },
                {
                    id: 8,
                    title: "Blinding Lights",
                    singer: "The Weekend",
                    uploader: "Solsist",
                },
            ],
            editMusicDetail: {},
        };
    },
    persist: {
        enabled: true,
    },
    actions: {
        editMusic() {
            if (this.editMusicDetail.isNew) {
                this.musicList.push({
                    ...this.editMusicDetail,
                    id: this.musicList[this.musicList.length - 1].id + 1,
                });
            } else {
                this.musicList.forEach((item,i) => {
                    if (item.id == this.editMusicDetail.id) {
                        this.musicList[i] = { ...this.editMusicDetail };
                        return;
                    }
                });
            }
        },
        delMusic(id) {
            this.musicList.forEach((item, i) => {
                if (item.id == id) {
                    this.musicList.splice(i, 1);
                    return;
                }
            });
        },
    },
});
