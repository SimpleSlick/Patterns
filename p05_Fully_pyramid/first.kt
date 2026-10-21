fun main(){
    val n = readln().toInt()

    for(i in 1..n){
        val spaces = " ".repeat(n - i)
        val stars = "* ".repeat(i)
        
        println(spaces + stars)
    }
}