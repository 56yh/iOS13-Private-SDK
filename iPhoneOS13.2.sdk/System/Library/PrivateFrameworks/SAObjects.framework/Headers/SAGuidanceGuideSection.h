//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAGuidanceGuideSection : SADomainObject
{
}

+ (id)guideSectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)guideSection;
@property(copy, nonatomic) NSString *sectionName;
@property(copy, nonatomic) NSArray *guideUtterances;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

