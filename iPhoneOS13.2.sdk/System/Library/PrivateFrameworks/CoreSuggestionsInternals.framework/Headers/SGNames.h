//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGNames : NSObject
{
}

+ (_Bool)shouldInvertOrderOfFirst:(id)arg1 last:(id)arg2;
+ (id)cjkSpacersToWhiteSpace:(id)arg1;
+ (id)cjkSpacerCharacters;
+ (id)nameStringFromEmailAddress:(id)arg1 inContext:(id)arg2;
+ (id)possibleNameStringFromEmailAddress:(id)arg1 inContext:(id)arg2;
+ (id)sgNameFromString:(id)arg1 origin:(id)arg2 recordId:(id)arg3 extractionInfo:(id)arg4;
+ (id)bestName:(id)arg1;
+ (id)surnameFromName:(id)arg1;
+ (id)sketchesForName:(id)arg1;
+ (id)nameFromEmail:(id)arg1;
+ (_Bool)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;
+ (_Bool)unnormalizedNamesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (_Bool)namesApproximatelyMatch:(id)arg1 and:(id)arg2 threshold:(double)arg3;
+ (_Bool)namesApproximatelyMatch:(id)arg1 and:(id)arg2;
+ (double)unnormalizedNameSimilarity:(id)arg1 and:(id)arg2;
+ (double)nameSimilarity:(id)arg1 and:(id)arg2;
+ (id)handleLastNameFirstOrder:(id)arg1;
+ (id)cleanName:(id)arg1;
+ (id)universalCleanName:(id)arg1;
+ (id)stripAndReturnHonorifics:(id)arg1;
+ (id)stripHonorifics:(id)arg1;
+ (_Bool)isDifficultName:(id)arg1;
+ (_Bool)isCommonVietnameseSurname:(id)arg1;
+ (_Bool)isProbablyShortCJKName:(id)arg1;
+ (_Bool)isLowercaseStringCommonNameWord:(id)arg1;
+ (unsigned int)attributesForNameWord:(id)arg1;
+ (_Bool)isSalientNameByChars:(id)arg1;
+ (_Bool)isFamilyName:(id)arg1;
+ (_Bool)isSalientName:(id)arg1;
+ (_Bool)isCommonNameWord:(id)arg1;
+ (CDStruct_a2e78aaa)namePayload:(id)arg1;

@end

