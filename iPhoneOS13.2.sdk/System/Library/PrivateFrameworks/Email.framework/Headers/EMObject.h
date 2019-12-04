//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMObject-Protocol.h>


@class EMObjectID, NSString;

@interface EMObject : NSObject <EMObject, NSSecureCoding, EFPubliclyDescribable>
{
    EMObjectID *_objectID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) EMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitWithObjectID:(id)arg1;
- (id)initWithObjectID:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

