fun main(){
    var n = readln().toInt()

    for(i in 1..n){
        var row = ""

        for(j in 1..i){
            row += j.toString()
        }
        println(row)
    }
}