fun main(){
    val n = readln().toInt()

    for(i in n downTo 1){
        val spaces = " ".repeat(n - i)
        val stars = "* ".repeat(i)
        
        print(spaces + stars)
    }
}