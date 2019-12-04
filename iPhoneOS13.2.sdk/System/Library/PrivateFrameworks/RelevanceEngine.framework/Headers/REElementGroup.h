//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <RelevanceEngine/REAutomaticExportedInterface-Protocol.h>

@class NSString;

@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying>
{
    NSString *_groupIdentifier;
    unsigned long long _behavior;
    long long _maxElementCount;
}

+ (id)adjoiningElementGroupWithIdentifier:(id)arg1;
+ (id)topElementGroupWithIdentifier:(id)arg1;
@property(nonatomic) long long maxElementCount; // @synthesize maxElementCount=_maxElementCount;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithGroupIdentifier:(id)arg1;

@end

