$(document).ready(function(){
    $(".chat_on").click(function(){
        $(".Layout").toggle();
        $(".chat_on").hide(300);
    });
    
    $(".close").click(function(){
        $(".Layout").hide();
        $(".chat_on").show(300);
    });
    
});