//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKTaskScheduler : NSObject
{
}

- (void)cancelAllTasks;
- (void)cancelTaskForToken:(struct NSString *)arg1;
- (struct NSString *)scheduleTask:(id /* block */)arg1 identifier:(id)arg2;

@end

