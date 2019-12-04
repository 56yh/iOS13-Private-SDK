//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface PSICachedGroup : NSObject <NSCopying>
{
    NSString *_text;
    NSString *_identifier;
    unsigned long long _category;
    unsigned long long _owningGroupId;
    unsigned long long _groupId;
}

@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) unsigned long long owningGroupId; // @synthesize owningGroupId=_owningGroupId;
@property(readonly, nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4;

@end

