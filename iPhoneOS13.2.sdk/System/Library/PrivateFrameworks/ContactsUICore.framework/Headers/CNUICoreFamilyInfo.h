//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSArray;

@interface CNUICoreFamilyInfo : NSObject
{
    CNContact *_meContact;
    NSArray *_elements;
}

@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
- (id)description;
- (id)initWithMeContact:(id)arg1 elements:(id)arg2;
- (id)init;

@end

