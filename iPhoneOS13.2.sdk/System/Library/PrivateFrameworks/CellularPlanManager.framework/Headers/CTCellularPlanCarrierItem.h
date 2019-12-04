//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSString *_websheetURL;
    NSString *_planPurchaseEndpointType;
    NSString *_warningText;
    _Bool _applePaySupported;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;
@property(readonly, nonatomic) NSString *planPurchaseEndpointType; // @synthesize planPurchaseEndpointType=_planPurchaseEndpointType;
@property(nonatomic) _Bool applePaySupported; // @synthesize applePaySupported=_applePaySupported;
@property(readonly, nonatomic) NSString *websheetURL; // @synthesize websheetURL=_websheetURL;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 applePaySupported:(_Bool)arg3 responseType:(id)arg4 warningText:(id)arg5;

@end

