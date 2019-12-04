//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/ECMessageFlagsBuilder-Protocol.h>
#import <EmailCore/EFPubliclyDescribable-Protocol.h>



@class NSString;

@interface ECMessageFlags : NSObject <ECMessageFlagsBuilder, NSCopying, NSSecureCoding, EFPubliclyDescribable>
{
    union ECMessageFlagsHashedBitField _storage;
}

+ (_Bool)supportsSecureCoding;
+ (id)cachedFlagsWithHash:(unsigned long long)arg1 generator:(id /* block */)arg2;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)_flagColorDebugDescription;
- (id)_junkLevelDebugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long flagColor;
@property(nonatomic) unsigned long long junkLevel;
@property(nonatomic) _Bool junkLevelSetByUser;
@property(nonatomic) _Bool redirected;
@property(nonatomic) _Bool forwarded;
@property(nonatomic) _Bool draft;
@property(nonatomic) _Bool flagged;
@property(nonatomic) _Bool replied;
@property(nonatomic) _Bool deleted;
@property(nonatomic) _Bool read;
@property(readonly) NSUInteger hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithHash:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

