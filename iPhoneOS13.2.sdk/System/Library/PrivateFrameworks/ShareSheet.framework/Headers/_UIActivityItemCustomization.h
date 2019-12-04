//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _UIActivityItemCustomization : NSObject
{
    _Bool _enabled;
    NSString *_title;
    NSString *_footerText;
    NSString *_identifier;
}

+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 handler:(id /* block */)arg4;
+ (id)pickerCustomizationWithIdentifier:(id)arg1 options:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4 valueChangedHandler:(id /* block */)arg5;
+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 value:(_Bool)arg4 valueChangedHandler:(id /* block */)arg5;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_initWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3;

@end

