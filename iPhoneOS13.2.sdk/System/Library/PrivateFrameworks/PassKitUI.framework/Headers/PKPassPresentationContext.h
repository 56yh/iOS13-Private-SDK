//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NSCopying;

@interface PKPassPresentationContext : NSObject
{
    _Bool _animated;
    _Bool _fieldDetect;
    _Bool _postPayment;
    _Bool _forcePayment;
    _Bool _persistentCardEmulation;
    _Bool _wasAutomaticallySelected;
    _Bool _limitServerLoad;
    NSArray *_additionalPassUniqueIdentifiers;
    id <NSCopying> _userInfo;
}

+ (id)contextWithAnimation:(_Bool)arg1 wasAutomaticallySelected:(_Bool)arg2 additionalPassUniqueIdentifiers:(id)arg3 userInfo:(id)arg4;
+ (id)contextWithAnimation:(_Bool)arg1 wasAutomaticallySelected:(_Bool)arg2 additionalPassUniqueIdentifiers:(id)arg3;
+ (id)contextWithAnimation:(_Bool)arg1 additionalPassUniqueIdentifiers:(id)arg2;
+ (id)contextWithAnimation:(_Bool)arg1;
@property(nonatomic) _Bool limitServerLoad; // @synthesize limitServerLoad=_limitServerLoad;
@property(copy, nonatomic) id <NSCopying> userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool wasAutomaticallySelected; // @synthesize wasAutomaticallySelected=_wasAutomaticallySelected;
@property(copy, nonatomic) NSArray *additionalPassUniqueIdentifiers; // @synthesize additionalPassUniqueIdentifiers=_additionalPassUniqueIdentifiers;
@property(nonatomic, getter=wantsPersistentCardEmulation) _Bool persistentCardEmulation; // @synthesize persistentCardEmulation=_persistentCardEmulation;
@property(nonatomic, getter=wantsForcedPayment) _Bool forcePayment; // @synthesize forcePayment=_forcePayment;
@property(nonatomic, getter=isPostPayment) _Bool postPayment; // @synthesize postPayment=_postPayment;
@property(nonatomic, getter=isFieldDetect) _Bool fieldDetect; // @synthesize fieldDetect=_fieldDetect;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)description;

@end

