//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMIPPhoneNumberUtils : NSObject
{
}

+ (_Bool)handle:(id)arg1 matchesHandle:(id)arg2;
+ (_Bool)isEmail:(id)arg1;
+ (id)completeNumberForPhoneNumber:(id)arg1 formatted:(_Bool)arg2;
+ (_Bool)updateTextField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
+ (id)unformatPhoneNumber:(id)arg1;
+ (id)formatFullyQualifiedPhoneNumber:(id)arg1;
+ (id)normalizedPhoneNumber:(id)arg1;
+ (id)formatPhoneNumber:(id)arg1;
+ (id)countryCode;
+ (_Bool)isPhoneNumberValid:(id)arg1;

@end

