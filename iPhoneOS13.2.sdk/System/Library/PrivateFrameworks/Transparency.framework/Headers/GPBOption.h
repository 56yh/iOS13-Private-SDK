//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class GPBAny, NSString;

__attribute__((visibility("hidden")))
@interface GPBOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBAny *value; // @dynamic value;

@end

