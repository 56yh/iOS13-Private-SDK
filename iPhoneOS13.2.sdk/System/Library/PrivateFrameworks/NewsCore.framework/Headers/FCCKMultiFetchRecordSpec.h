//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCCKMultiFetchRecordSpec : NSObject
{
    _Bool _shortcut;
    NSString *_recordType;
    NSArray *_desiredKeys;
    NSArray *_fetchKeys;
}

@property(nonatomic) _Bool shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSArray *fetchKeys; // @synthesize fetchKeys=_fetchKeys;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;

@end

