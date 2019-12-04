//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface HFOrderedHomeKitItemData : NSObject
{
    NSUUID *_uniqueIdentifier;
    NSString *_title;
    NSDate *_dateAdded;
    NSString *_actionSetType;
}

+ (id)dataWithUniqueIdentifier:(id)arg1 title:(id)arg2 dateAdded:(id)arg3;
@property(copy, nonatomic) NSString *actionSetType; // @synthesize actionSetType=_actionSetType;
@property(copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

@end

