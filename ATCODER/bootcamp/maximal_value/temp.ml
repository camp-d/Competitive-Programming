open Base;;

let n = Caml.read_int () in
let b = Caml.read_line () |> String.split ~on:' ' |> List.map ~f:Int.of_string in

let rec max size = if List.


let answer =
answer |> Int.to_string |> Caml.print_endline
