//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DAECalendarAvailabilityContext : NSObject
{
    id /* block */ _resultsBlock;
    id /* block */ _completionBlock;
}

- (void)finishedWithError:(id)arg1;
- (void)resultsReturned:(id)arg1;
- (id)initWithResultsBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;

@end

