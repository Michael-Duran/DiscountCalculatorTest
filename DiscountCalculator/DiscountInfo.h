//
//  DiscountInfo.h
//  DiscountCalculator
//
//  Created by Michael on 3/1/14.
//  Copyright (c) 2014 Macbook Air. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface DiscountInfo : NSObject

@property (nonatomic) double price;
@property (nonatomic) double dollarsOff;
@property (nonatomic) double discount;
@property (nonatomic) double additionalDiscount;
@property (nonatomic) double tax;

@property (nonatomic) double discountedPrice;
@property (nonatomic) double originalPrice;


//- (float) discountedPrice;
//- (float) originalPrice;

+ (DiscountInfo*) mainInfo;

+ (void) setDiscountInfo: (NSString*) priceInput : (NSString*) dollarsOffInput : (NSString*) discountInput : (NSString*) additionalDiscountInput : (NSString*) taxInput;

+ (NSString*) calcPrice;

+ (NSString*) calcDiscountPrice;

@end

static DiscountInfo* _mainInfo;