//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface EMContentRequestOptions : NSObject <NSSecureCoding>
{
    _Bool _includeSuggestionItems;
    NSString *_requestedRepresentation;
    long long _networkUsage;
}

+ (_Bool)supportsSecureCoding;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(_Bool)arg3;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2;
@property(readonly, nonatomic) _Bool includeSuggestionItems; // @synthesize includeSuggestionItems=_includeSuggestionItems;
@property(nonatomic) long long networkUsage; // @synthesize networkUsage=_networkUsage;
@property(copy, nonatomic) NSString *requestedRepresentation; // @synthesize requestedRepresentation=_requestedRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)initWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(_Bool)arg3;
- (id)init;

@end

