//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FAFamilyMember, NSArray;

@interface CNUICoreFamilyElement : NSObject
{
    FAFamilyMember *_familyMember;
    NSArray *_matchingContacts;
}

@property(readonly, nonatomic) NSArray *matchingContacts; // @synthesize matchingContacts=_matchingContacts;
@property(readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)description;
- (_Bool)containsFamilyMember:(id)arg1;
@property(readonly, nonatomic) _Bool isParent;
@property(readonly, nonatomic) _Bool hasMatchingContacts;
- (id)initWithFamilyMember:(id)arg1 matchingContacts:(id)arg2;

@end

