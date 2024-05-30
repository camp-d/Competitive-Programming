let rec max ls size result = 
    if (List.length ls = 1 && size <> 1) then
        result + (List.hd ls)
    else if (List.length ls = 1 && size = 1) then
        result+(List.hd ls)+(List.hd ls)
    else if(List.length ls = size) then
        max ls (size-1) (result+(List.hd ls)+(List.nth ls (List.length ls)-1))
    else
        match List.hd ls <= List.hd (List.tl ls) with
        | true -> max (List.tl ls) (size) (result + (List.hd ls))
        | false -> max (List.tl ls) (size) (result + (List.hd (List.tl ls)))
;;

let explode s = List.init (String.length s) (String.get s);;

let rec buildls lst out = 
    match lst with
    | [] -> out
    | h::t -> buildls t ((int_of_string h) :: out);;

let n = Scanf.sscanf (read_line()) "%d" (fun a -> a) in

let b = Scanf.sscanf (read_line()) "%s" (fun a -> a) in

let a = String.split_on_char ' ' b in

let ls = buildls a [] in

let answer = max ls (List.length ls) 0 in

print_endline (string_of_int answer)
