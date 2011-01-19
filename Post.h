//
//  Post.h
//  CoreDataBug
//
//  Created by Daniel Norberg on 2011-01-19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Blog;

@interface Post :  NSManagedObject
{
}

@property (nonatomic, retain) NSString * content;
@property (nonatomic, retain) Blog * blog;

@end



