//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface _DUIAccessibilityDragStatus : NSObject <NSSecureCoding>
{
    _Bool _forbidden;
    long long _itemCount;
    unsigned long long _potentialOperation;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool forbidden; // @synthesize forbidden=_forbidden;
@property(nonatomic) unsigned long long potentialOperation; // @synthesize potentialOperation=_potentialOperation;
@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

