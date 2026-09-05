fun main(){
    var n: Int = readln().toInt()

    for(i in 1..n){
        var spaces = " ".repeat(i)
        var stars = "*".repeat(n - i + 1)

        println(spaces + stars)
    }
}