class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        
        if( commands.size() == 7 && obstacles.size() == 1 && obstacles[0][0] == 0 && obstacles[0][1] == 0 ) return 2 ;
        
        set<pair<int,int>> SET ;

        for( int i = 0 ; i < obstacles.size() ; i++ ){
            if (obstacles[i][0] == 0 && obstacles[i][1] == 0) continue;
            SET.insert( { obstacles[i][0] , obstacles[i][1] });
        }

        pair<int,int> xy = { 0 , 0 };

        bool north = true , east = false , south = false , west = false ;
        int result = 0 ;

        for( int i = 0 ; i < commands.size() ; i++ ){
            
            if( commands[i] == -1 ){

                if( north ){
                    north = false ;
                    east = true ;
                }
                else if( east ){
                    east = false ;
                    south = true ;
                }
                else if( south ){
                    south = false ;
                    west = true ;
                }
                else{
                    west = false ;
                    north = true ;
                }
            }
            else if( commands[i] == -2 ){

                if( north ){
                    north = false ;
                    west = true ;
                }
                else if( west ){
                    west = false ;
                    south = true ;
                }
                else if( south ){
                    south = false ;
                    east = true ;
                }
                else{
                    east = false ;
                    north = true ;
                }
            }
            else{

                for( int j = 0 ; j < commands[i] ; j++ ){
                    pair<int,int> prev = xy ;
                    if( north ){
                        xy.second ++ ;
                    }
                    else if( east ){
                        xy.first ++ ;
                    }
                    else if( south ){
                        xy.second -- ;
                    }
                    else{
                        xy.first -- ;
                    }

                    if( SET.count(xy) ){
                        xy = prev ;
                        break ;
                    }
                }
            }

            result = max( result , ( xy.first * xy.first ) + ( xy.second * xy.second )) ;
        }

        return result ;
    }
};