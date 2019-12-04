//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebBackgroundTaskController : NSObject
{
    unsigned long long _invalidBackgroundTaskIdentifier;
    id /* block */ _backgroundTaskStartBlock;
    id /* block */ _backgroundTaskEndBlock;
}

+ (id)sharedController;
@property(copy, nonatomic) id /* block */ backgroundTaskEndBlock; // @synthesize backgroundTaskEndBlock=_backgroundTaskEndBlock;
@property(copy, nonatomic) id /* block */ backgroundTaskStartBlock; // @synthesize backgroundTaskStartBlock=_backgroundTaskStartBlock;
@property(nonatomic) unsigned long long invalidBackgroundTaskIdentifier; // @synthesize invalidBackgroundTaskIdentifier=_invalidBackgroundTaskIdentifier;
- (void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1;
- (unsigned long long)startBackgroundTaskWithExpirationHandler:(id /* block */)arg1;
- (void)dealloc;

@end

