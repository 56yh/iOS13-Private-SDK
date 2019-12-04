//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSMutableArray, NSMutableDictionary, NSString;

@interface WBSOpenSearchURLTemplate : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_parametersByName;
    NSMutableArray *_parameters;
    NSString *_templateString;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *templateString; // @synthesize templateString=_templateString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)templateByAddingParameter:(id)arg1 asURLQueryParameter:(id)arg2;
- (id)templateBySubstitutingValues:(id)arg1;
- (id)templateBySubstitutingValue:(id)arg1 forParameter:(id)arg2;
- (id)URLWithSearchTerms:(id)arg1;
- (_Bool)includesParameter:(id)arg1;
- (id)initWithString:(id)arg1;

@end

