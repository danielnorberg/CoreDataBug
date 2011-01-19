//
//  Blog.h
//  CoreDataBug
//
//  Created by Daniel Norberg on 2011-01-19.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Post;

@interface Blog :  NSManagedObject
{
}

@property (nonatomic, retain) NSSet* posts;

@end


@interface Blog (CoreDataGeneratedAccessors)
- (void)addPostsObject:(Post *)value;
- (void)removePostsObject:(Post *)value;
- (void)addPosts:(NSSet *)value;
- (void)removePosts:(NSSet *)value;

@end

