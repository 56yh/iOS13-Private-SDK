//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CDDataAccess/ICSLoggingDelegate-Protocol.h>

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>
{
}

+ (id)sharedLogger;
- (void)logICSMessage:(id)arg1 atLevel:(long long)arg2;
- (void)registerWithiCalendar;

@end

