//
//  Foo.h
//  CoreDataBug
//
//  Created by Daniel Norberg on 2011-01-19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Bar;

@interface Foo :  NSManagedObject  
{
}

@property (nonatomic, retain) NSSet* bars;

@end


@interface Foo (CoreDataGeneratedAccessors)
- (void)addBarsObject:(Bar *)value;
- (void)removeBarsObject:(Bar *)value;
- (void)addBars:(NSSet *)value;
- (void)removeBars:(NSSet *)value;

@end

