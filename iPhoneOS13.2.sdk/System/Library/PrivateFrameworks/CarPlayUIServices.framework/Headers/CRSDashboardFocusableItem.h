//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSUUID, UIView;
@protocol CRSUIDashboardFocusableItemProviding;

@interface CRSDashboardFocusableItem : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    UIView<CRSUIDashboardFocusableItemProviding> *_focusProvidingItem;
    struct CGRect _frameInWindow;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak UIView<CRSUIDashboardFocusableItemProviding> *focusProvidingItem; // @synthesize focusProvidingItem=_focusProvidingItem;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGRect frameInWindow; // @synthesize frameInWindow=_frameInWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusableView:(id)arg1;
- (id)init;

@end

