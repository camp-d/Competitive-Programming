open Base;;

let rec max ls size result = 
    if List.size ls = size || List.size ls = 1 then
        max List.tl ls size-1 result+(List.hd ls)
    else if List.length != 0 then
        match List.hd ls <= List.hd (List.tl ls) with
        | true -> max List.tl ls size-1 (result + (List.hd ls))
        | false -> max List.tl ls size-1 (result + (List.hd (List.tl ls)))
    else
        result;;

let n = Caml.read_int () in
let b = Caml.read_line () |> String.split ~on:' ' |> List.map ~f:Int.of_string in

let answer = max b List.length b 0 in
answer |> Int.to_string |> Caml.print_endline
