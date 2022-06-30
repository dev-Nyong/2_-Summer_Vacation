var http = require('http');
var fs = require('fs');
var app = http.createServer(function(request,response){
    var url = request.url;
    if(request.url == '/'){
      url = '/index.html';
    }
    if(request.url == '/favicon.ico'){
      return response.writeHead(404);
    }
    response.writeHead(200);
    console.log(__dirname +url);
    response.end(fs.readFileSync(__dirname + url));
    //프로그래밍적으로 사용자에게 전송할 데이터를 생성한다. >nodejs가 가지고 있는
});
app.listen(3000);
