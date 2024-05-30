let min a b = 
    if a < b then
        a
    else
        b;;

let rec max ls on result = 
    if on = 1 then
        max ls 0 (result + List.hd ls + (List.nth ls ((List.length ls)-1) ))
    else
        match ls with
        | [] -> result
        | [x] -> result
        | h :: t -> max t 0 (result + (min h (List.hd t) ) );;

let rec buildls lst out = 
    match lst with
    | [] -> out
    | h::t -> buildls t ((int_of_string h) :: out);;

let _ = Scanf.sscanf (read_line()) "%d" (fun a -> a) in

let b = read_line() in

let a = String.split_on_char ' ' b in

let ls = buildls a [] in

let answer = max ls 1 0 in

print_endline (string_of_int answer)
