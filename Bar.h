//
//  Bar.h
//  CoreDataBug
//
//  Created by Daniel Norberg on 2011-01-19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Foo;

@interface Bar :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * baz;
@property (nonatomic, retain) Foo * foo;

@end



