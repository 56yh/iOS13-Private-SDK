//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject
{
    NSMutableDictionary *_allTasks;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *allTasks; // @synthesize allTasks=_allTasks;
- (void)unregisterTask:(id)arg1;
- (void)registerTask:(id)arg1;
- (id)init;

@end

