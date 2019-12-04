//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaEntityKind : NSObject <NSCopying>
{
    NSString *_mediaEntityClassName;
    NSArray *_propertyDescriptors;
    NSDictionary *_propertyDescriptorsByName;
}

@property(copy, nonatomic) NSDictionary *propertyDescriptorsByName; // @synthesize propertyDescriptorsByName=_propertyDescriptorsByName;
@property(copy, nonatomic) NSArray *propertyDescriptors; // @synthesize propertyDescriptors=_propertyDescriptors;
@property(readonly, copy, nonatomic) NSString *mediaEntityClassName; // @synthesize mediaEntityClassName=_mediaEntityClassName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sortingPropertyDescriptorForName:(id)arg1;
- (id)propertyDescriptorForName:(id)arg1;
- (id)initWithMediaEntityClassName:(id)arg1;
- (id)init;

@end

