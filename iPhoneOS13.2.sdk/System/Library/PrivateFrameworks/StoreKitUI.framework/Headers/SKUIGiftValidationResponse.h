//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIGiftValidationResponse : NSObject
{
    NSString *_errorString;
    NSString *_giftKey;
    NSString *_totalGiftAmountString;
    _Bool _valid;
}

@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) NSString *totalGiftAmountString; // @synthesize totalGiftAmountString=_totalGiftAmountString;
@property(readonly, nonatomic) NSString *giftKey; // @synthesize giftKey=_giftKey;
@property(readonly, nonatomic) NSString *errorString; // @synthesize errorString=_errorString;
- (id)initWithValidationDictionary:(id)arg1;

@end

