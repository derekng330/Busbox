//
//  SqlList.h
//  busbox
//
//  Created by Derek Ng on 11-02-27.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sql.h"

@interface SqlList : Sql{

	NSArray* generic_list;
	
	
}



-(NSArray*)listOfObjsInTable: (NSString*) table inColumn: (NSString*) column; 



@end
