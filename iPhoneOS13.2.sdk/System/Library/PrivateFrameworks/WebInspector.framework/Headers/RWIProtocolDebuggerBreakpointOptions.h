//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject
{
}

@property(nonatomic) int ignoreCount;
@property(nonatomic) _Bool autoContinue;
@property(copy, nonatomic) NSArray *actions;
@property(copy, nonatomic) NSString *condition;

@end

